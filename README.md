# clsc: Simple Command in C++ to clear screen in Linux and Windows.
-------------------------------------------------------------------------
### clsc.cpp : source file for the clear screen command
### clsc     : Linux clear screen command for bash
#### SHA-256:  95ee970280658b8c91719b4646fbffeaf67f3e8e075535e7091deed1b0e57b38. https://www.virustotal.com/gui/file/95ee970280658b8c91719b4646fbffeaf67f3e8e075535e7091deed1b0e57b38/
### clsc.exe : Windows clear screen executable file for command line and PowerShell. I just recompiled it using the newest Visual Studio update.
#### SHA-256: ce1d65562cfcdfe10241a5bc49d5f44f681f93fd2dd7f3edd707a71e51b0a683, https://www.virustotal.com/gui/file/ce1d65562cfcdfe10241a5bc49d5f44f681f93fd2dd7f3edd707a71e51b0a683/
### VC_redist.x86.exe : Visual C++ redistributable Package necessary to run C++ programs built with Visual Studio.
#### SHA-256: 4521ed84b9b1679a706e719423d54ef5e413dc50dde1cf362232d7359d7e89c4. https://www.virustotal.com/gui/file/4521ed84b9b1679a706e719423d54ef5e413dc50dde1cf362232d7359d7e89c4/
-------------------------------------------------------------------------
## To add clsc command to your environment, same clear screen command for both Windows and Linux:
### 1. In Linux add the following line to your .bashrc file: alias clsc='/home/yourUserName/clsc' or the location where you put the clsc command file. Then restart bash.
### 2. In Windows add the clsc.exe file to C:\Windows\System32\. 
### 3. If clsc.exe does not work (e.g. in PowerShell .\clsc), then install the Visual C++ Redistributable package. Reference: https://support.microsoft.com/en-us/topic/the-latest-supported-visual-c-downloads-2647da03-1eea-4433-9aff-95f26a218cc0
