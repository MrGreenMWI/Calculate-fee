@echo ��ʼע��
copy msvcp140d.dll %windir%\system32\
regsvr32 %windir%\system32\msvcp140d.dll /s
@echo msvcp140d.dllע��ɹ�
@pause