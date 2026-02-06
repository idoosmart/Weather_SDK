package com.idoosmart.weather.example

import android.os.Bundle

import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.lifecycleScope
import com.idoosmart.weather.IDOWeatherSDK
import com.idoosmart.weather.example.databinding.ActivityMainBinding
import com.idoosmart.weather.model.WeatherRequest
import kotlinx.coroutines.launch

/**
 * Android 示例 Activity
 * 演示如何使用 IDOWeatherSDK 获取天气数据
 */
class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        IDOWeatherSDK.setEnableLog(true)
        // 注册 SDK (传入 appKey)
        IDOWeatherSDK.register("YOUR_APP_KEY", 86)
        // 设置按钮点击事件
        setupViews()
    }

    private fun setupViews() {
        binding.btnGetWeather.setOnClickListener {
            getWeather()
        }
    }

    private fun getWeather() {
        val latText = binding.etLatitude.text.toString()
        val lonText = binding.etLongitude.text.toString()
        val cityText = binding.etCity.text.toString()

        if (latText.isEmpty() || lonText.isEmpty()) {
            Toast.makeText(this, "请输入经纬度", Toast.LENGTH_SHORT).show()
            return
        }

        val latitude = latText.toDoubleOrNull()
        val longitude = lonText.toDoubleOrNull()

        if (latitude == null || longitude == null) {
            Toast.makeText(this, "经纬度格式错误", Toast.LENGTH_SHORT).show()
            return
        }

        binding.tvResult.text = "正在获取天气数据..."


        lifecycleScope.launch {
            // 使用 WeatherRequest.Builder 构建详细请求参数
            val request = WeatherRequest.Builder()
                .longitude(lonText)
                .latitude(latText)
                .type(1) // 1=IBM, 2=HeWeather
                .code("") // 国家编码 (可选)
                .city(cityText) // 城市 (可选)
                .district("") // 区 (可选)
                .extend(mapOf("test" to "val"))
                .build()

            // 调用 SDK - 返回原始 JSON 字符串
            val result = IDOWeatherSDK.shared.getWeather(request)

            // 处理结果
            result.fold(
                onSuccess = { jsonString ->
                    // 直接显示原始 JSON 字符串
                    binding.tvResult.text = "=== 原始 JSON 响应 ===\n\n$jsonString"
                },
                onFailure = { error ->
                    binding.tvResult.text = "请求错误: ${error.message}"
                }
            )
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        // 释放资源
        IDOWeatherSDK.close()
    }
}
