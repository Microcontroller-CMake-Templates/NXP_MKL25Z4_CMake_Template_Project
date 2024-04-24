# NXP_MKL25Z4_CMake_Template_Project
Template project for the MKL25Z4 microcontroller

## Using this as a template
You can click the use this as template button to create your own version on basis of this template.

## Minimal SDK
This project uses a [minimal SDK package](https://github.com/Microcontroller-CMake-Templates/NXP_MKL25Z_SDK) (only containing the CMSIS headers and register descriptions). This is a direct derivative from the original MCUXpresso package delivered by NXP themselves.

## Getting Started
To use this project, you need the following software installed:

- CMake

- Ninja

- Arm-none-eabi-gcc compiler

- VSCode/Any other IDE with CMake/Debugging support

- JLink tools (Drivers, Debug server (ozone, optional))


### Setting up the development environment on Windows
The development with CMake on Windows requires the following tools:
- [CMake](https://cmake.org/download/) (It is highly recommended to install the .msi installer, to avoid having to mess with the PATH variable)
- [Ninja-build](https://github.com/ninja-build/ninja/releases) (Install it with pip)
- [GCC-ARM-NONE-EABI](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads) (Download: arm-gnu-toolchain-xx.x.xxxx-mingw-w64-i686-arm-none-eabi.exe, the latest version is recommended, **Always add to PATH! It is on the latest install wizard page, second checkbox!**)
- CMD line or IDE with CMake integration (this guide will use vscode)
#### CMake installation
Go to the CMake download page:
https://cmake.org/download/

Download and run the Windows x64 Installer with the .MSI extension.

**When asked to add the installed executable to the PATH variable, always select yes**.
Otherwise you will have to add it manually to path, or tell the IDE/CMD line where the CMake executable is located everytime you want to run the executable.

#### Ninja installation
Ninja can be installed easily by running: `pip install ninja`

This ofcourse requires you to have python with the pip package manager already installed on your system. But probably you will have to use pip anyway for other projects as it is used very frequently in python projects.

#### GCC-ARM Toolchain

> [!TIP]
>
> At the last page of the installation wizard is asked to add the executables to PATH (Second checkbox). **Always check this checkbox**! Having to mess with the PATH variable yourself in Windows is quite cumbersome to say the least :/ 

Download and install the arm-gnu-toolchain-xx.x.xxxx-mingw-w64-i686-arm-none-eabi.exe installer from the download page: https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads

**Restart the computer now, to apply the changes to PATH**


### Setting up the development environment on Linux
 The development with CMake on Linux requires the following tools:
- [CMake](https://cmake.org/download/) (Install using the package manager!)
- [Ninja-build](https://github.com/ninja-build/ninja/releases) (Install using the package manager!)
- [GCC-ARM-NONE-EABI](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads) (Install using the package manager!)
- CMD line or IDE with CMake integration (this guide will use vscode)

## Install with the package manager

The easiest way to install the required packages is by using the terminal with the distribution provided packagemanager:

**Ubuntu and Debian:**
```bash
sudo apt-get update && sudo apt-get install -y build-essential cmake ninja-build gcc-arm-none-eabi
```

**Fedora:**
```bash
sudo dnf makecache --refresh && sudo dnf -y install arm-none-eabi-gcc-cs cmake ninja-build
```

**SUSE:**
```bash
sudo zypper install -y cross-arm-none-eabi-gcc12 cross-arm-none-eabi-gcc12-lib cmake ninja-build
```

**Arch:**
```bash
sudo pacman -S cmake ninja arm-none-eabi-gcc
```

### Vscode

You probably have this installed already, but do this if you have not installed it yet: https://code.visualstudio.com/

Open VSCode and install the [CMake Tools plugin from Microsoft](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools), [C/C++ plugin from Microsoft](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) and [C/C++ Extension Pack from Microsoft](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack). 



#### Clone this project

Now clone this project with the GIT client inside VSCode or using the terminal/GitHub Desktop.

```
https://github.com/Microcontroller-CMake-Templates/NXP_MKL25Z4_CMake_Template_Project
```

**Now you are set! Let's open the first project:**

Select `File->Open Folder ... [Ctrl+K Ctrl+O]` then select the folder `NXP_MKL25Z4_CMake_Template_Project` to open the project

CMake build tools will probably ask you to configure the project, select Yes. 

It will ask you for the Toolkit, select the scan for toolkits option if no newer version than gcc-arm-none-eabi-12 is listed, so that it will scan for all available compilers on your computer and add your freshly installed GCC-ARM toolchain to the list.

Now that the CMake plugin has scanned for kits, it probably does not ask again which kit to use. But we still want to specify the gcc-arm-none-eabi-12+ compiler as our compiler, therefore we have to launch that menu manually and select the compiler. **`Ctrl+Shift+P` + CMake: Select a kit -> GCC xx.x.x arm-none-eabi**

It will probably ask you to always configure the project, select **No** (if yes, it will automatically configure **any** CMake project you open).


### Further development

See [the original vscode cmake documentation](https://code.visualstudio.com/docs/cpp/cmake-linux)!


## License

This template project is licensed MIT, the SDK is licensed BSD-3
