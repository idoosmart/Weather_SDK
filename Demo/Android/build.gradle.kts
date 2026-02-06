plugins {
    id("com.android.application") version "8.2.0"
    kotlin("android") version "1.9.22"
}

android {
    namespace = "com.idoosmart.weather.example"
    compileSdk = 34

    defaultConfig {
        applicationId = "com.idoosmart.weather.example"
        minSdk = 21
        targetSdk = 34
        versionCode = 1
        versionName = "1.0"
    }

    buildTypes {
        release {
            isMinifyEnabled = false
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }

    kotlinOptions {
        jvmTarget = "1.8"
    }

    buildFeatures {
        viewBinding = true
    }
}

dependencies {
    implementation(files("libs/library-release.aar"))
    //implementation(project(":library"))
    
    // Ktor dependencies (needed by SDK)
    implementation("io.ktor:ktor-client-core:2.3.7")
    implementation("io.ktor:ktor-client-okhttp:2.3.7")
    implementation("io.ktor:ktor-client-logging:2.3.7")
    
    // Kotlinx dependencies
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.7.3")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.7.3")
    implementation("org.jetbrains.kotlinx:kotlinx-datetime:0.5.0")
    
    // AndroidX
    implementation("androidx.core:core-ktx:1.12.0")
    implementation("androidx.appcompat:appcompat:1.6.1")
    implementation("com.google.android.material:material:1.11.0")
    implementation("androidx.constraintlayout:constraintlayout:2.1.4")
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:2.7.0")

    // Kermit Logging
    implementation("co.touchlab:kermit:2.0.5")
    implementation("co.touchlab:kermit-io:2.0.5")
}
