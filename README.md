# Weather_SDK

Weather_SDK 是一个为 Android 和 iOS 平台提供天气数据服务的开发工具包。

## 项目结构

本项目包含 SDK 二进制文件以及演示如何集成和使用 SDK 的示例程序。

```text
.
├── Demo/                  # 示例程序
│   ├── Android/           # Android 平台示例应用 (Kotlin/Java)
│   └── iOS/               # iOS 平台示例应用 (Swift/Objective-C)
├── IDOWeatherSDK_V1.0.0/  # SDK 二进制发布包
│   ├── Android/           # Android SDK (.aar 文件)
│   └── iOS/               # iOS SDK (.framework 文件夹)
└── README.md              # 项目说明文档
```

## 说明

- **Demo**: 示例程序演示了如何初始化 SDK、注册 AppKey 以及请求天气数据的核心流程。
- **Release**: `IDOWeatherSDK_V1.0.0` 目录下存放的是可直接集成到项目中的 SDK 库文件。

详细的集成步骤和 API 说明，请参考各平台 Demo 项目中的源码实现。

**文档预览**: [GitHub Pages Link](https://idoosmart.github.io/Weather_MkDocs/)

