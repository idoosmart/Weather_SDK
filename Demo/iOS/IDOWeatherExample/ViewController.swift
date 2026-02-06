import UIKit
import IDOWeatherSDK

/// iOS 示例 ViewController
/// 演示如何使用 IDOWeatherSDK 获取天气数据
class ViewController: UIViewController {
    
    // MARK: - UI Elements
    
    private let titleLabel: UILabel = {
        let label = UILabel()
        label.text = "IDOWeatherSDK 示例"
        label.font = UIFont.boldSystemFont(ofSize: 24)
        label.textAlignment = .center
        label.translatesAutoresizingMaskIntoConstraints = false
        return label
    }()
    
    private let latitudeTextField: UITextField = {
        let textField = UITextField()
        textField.placeholder = "纬度 (例如: 39.9042)"
        textField.text = "39.9042"
        textField.borderStyle = .roundedRect
        textField.keyboardType = .decimalPad
        textField.translatesAutoresizingMaskIntoConstraints = false
        return textField
    }()
    
    private let longitudeTextField: UITextField = {
        let textField = UITextField()
        textField.placeholder = "经度 (例如: 116.4074)"
        textField.text = "116.4074"
        textField.borderStyle = .roundedRect
        textField.keyboardType = .decimalPad
        textField.translatesAutoresizingMaskIntoConstraints = false
        return textField
    }()
    
    private let cityTextField: UITextField = {
        let textField = UITextField()
        textField.placeholder = "城市 (例如: 北京)"
        textField.text = "北京"
        textField.borderStyle = .roundedRect
        textField.translatesAutoresizingMaskIntoConstraints = false
        return textField
    }()
    
    private let getWeatherButton: UIButton = {
        let button = UIButton(type: .system)
        button.setTitle("获取天气", for: .normal)
        button.titleLabel?.font = UIFont.boldSystemFont(ofSize: 18)
        button.backgroundColor = UIColor.systemBlue
        button.setTitleColor(.white, for: .normal)
        button.layer.cornerRadius = 10
        button.translatesAutoresizingMaskIntoConstraints = false
        return button
    }()
    
    private let activityIndicator: UIActivityIndicatorView = {
        let indicator = UIActivityIndicatorView(style: .medium)
        indicator.hidesWhenStopped = true
        indicator.translatesAutoresizingMaskIntoConstraints = false
        return indicator
    }()
    
    private let resultTextView: UITextView = {
        let textView = UITextView()
        textView.font = UIFont.monospacedSystemFont(ofSize: 14, weight: .regular)
        textView.isEditable = false
        textView.backgroundColor = UIColor.systemGray6
        textView.layer.cornerRadius = 10
        textView.textContainerInset = UIEdgeInsets(top: 16, left: 16, bottom: 16, right: 16)
        textView.text = "点击按钮获取天气数据"
        textView.translatesAutoresizingMaskIntoConstraints = false
        return textView
    }()
    
    // MARK: - Lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setupUI()
        setupSDK()
        setupActions()
    }
    
    // MARK: - Setup
    
    private func setupUI() {
        view.backgroundColor = .systemBackground
        
        view.addSubview(titleLabel)
        view.addSubview(latitudeTextField)
        view.addSubview(longitudeTextField)
        view.addSubview(cityTextField)
        view.addSubview(getWeatherButton)
        view.addSubview(activityIndicator)
        view.addSubview(resultTextView)
        
        NSLayoutConstraint.activate([
            // Title
            titleLabel.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor, constant: 20),
            titleLabel.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: 20),
            titleLabel.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -20),
            
            // Latitude TextField
            latitudeTextField.topAnchor.constraint(equalTo: titleLabel.bottomAnchor, constant: 30),
            latitudeTextField.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: 20),
            latitudeTextField.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -20),
            latitudeTextField.heightAnchor.constraint(equalToConstant: 44),
            
            // Longitude TextField
            longitudeTextField.topAnchor.constraint(equalTo: latitudeTextField.bottomAnchor, constant: 16),
            longitudeTextField.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: 20),
            longitudeTextField.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -20),
            longitudeTextField.heightAnchor.constraint(equalToConstant: 44),
            
            // City TextField
            cityTextField.topAnchor.constraint(equalTo: longitudeTextField.bottomAnchor, constant: 16),
            cityTextField.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: 20),
            cityTextField.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -20),
            cityTextField.heightAnchor.constraint(equalToConstant: 44),
            
            // Button
            getWeatherButton.topAnchor.constraint(equalTo: cityTextField.bottomAnchor, constant: 24),
            getWeatherButton.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: 20),
            getWeatherButton.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -20),
            getWeatherButton.heightAnchor.constraint(equalToConstant: 50),
            
            // Activity Indicator
            activityIndicator.centerYAnchor.constraint(equalTo: getWeatherButton.centerYAnchor),
            activityIndicator.trailingAnchor.constraint(equalTo: getWeatherButton.trailingAnchor, constant: -16),
            
            // Result TextView
            resultTextView.topAnchor.constraint(equalTo: getWeatherButton.bottomAnchor, constant: 24),
            resultTextView.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: 20),
            resultTextView.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -20),
            resultTextView.bottomAnchor.constraint(equalTo: view.safeAreaLayoutGuide.bottomAnchor, constant: -20),
        ])
    }
    
    private func setupSDK() {
        IDOWeatherSDK.shared.setEnableLog(enable: true)
        // 注册 SDK (传入 appKey)
        IDOWeatherSDK.shared.register(appKey: "YOUR_APP_KEY", countryCode: 86)
    }
    
    private func setupActions() {
        getWeatherButton.addTarget(self, action: #selector(getWeatherTapped), for: .touchUpInside)
        
        // 点击空白处收起键盘
        let tapGesture = UITapGestureRecognizer(target: self, action: #selector(dismissKeyboard))
        view.addGestureRecognizer(tapGesture)
    }
    
    // MARK: - Actions
    
    @objc private func getWeatherTapped() {
        dismissKeyboard()
        
        guard let latText = latitudeTextField.text,
              let lonText = longitudeTextField.text,
              !latText.isEmpty,
              !lonText.isEmpty else {
            showError("请输入经纬度")
            return
        }
        
        let cityText = cityTextField.text ?? ""
        getWeather(latitude: latText, longitude: lonText, city: cityText)
    }
    
    @objc private func dismissKeyboard() {
        view.endEditing(true)
    }
    
    // MARK: - Weather API
    
    private func getWeather(latitude: String, longitude: String, city: String) {
        setLoading(true)
        resultTextView.text = "正在获取天气数据..."
        
        // 使用 WeatherRequest.Builder 构建详细请求参数
        let request = WeatherRequest.Builder()
            .longitude(lon: longitude)
            .latitude(lat: latitude)
            .type(type: 1) // 1=IBM, 2=HeWeather
            .code(code: "086") // 国家编码 (可选)
            .city(city: city) // 城市 (可选)
            .district(district: "") // 区 (可选)
            .extend(extend: ["test": "val"])
            .build()
        
        // 调用 SDK - 返回原始 JSON 字符串
        IDOWeatherSDK.shared.getWeather(request: request) { [weak self] result, error in
            DispatchQueue.main.async {
                self?.setLoading(false)
                
                if let error = error {
                    self?.showError("获取失败: \(error.localizedDescription)")
                    return
                }
                
                guard let result = result else {
                    self?.showError("获取失败: 无数据")
                    return
                }
                
                // KMP 返回的是 WeatherApiResult<String> (原始 JSON)
                if let jsonString = result.getOrNull() {
                    self?.resultTextView.text = "=== 原始 JSON 响应 ===\n\n\(jsonString)"
                    self?.resultTextView.textColor = .label
                } else if let errorObj = result.errorOrNull() {
                    self?.showError("获取失败: \(errorObj.message)")
                } else {
                    self?.showError("获取失败: 未知错误")
                }
            }
        }
    }
    
    private func showError(_ message: String) {
        resultTextView.text = "❌ \(message)"
        resultTextView.textColor = .systemRed
    }
    
    private func setLoading(_ loading: Bool) {
        getWeatherButton.isEnabled = !loading
        if loading {
            activityIndicator.startAnimating()
            getWeatherButton.setTitle("获取中...", for: .normal)
        } else {
            activityIndicator.stopAnimating()
            getWeatherButton.setTitle("获取天气", for: .normal)
        }
    }
}
