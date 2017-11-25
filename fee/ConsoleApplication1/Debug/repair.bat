@echo 开始注册
copy msvcp140d.dll %windir%\system32\
regsvr32 %windir%\system32\msvcp140d.dll /s
@echo msvcp140d.dll注册成功
@pause