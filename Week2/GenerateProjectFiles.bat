mkdir build
cd build
cmake ..
rem Build a second time to fix PCH folder
cmake ..
pause
cd..
call BuildShaders.bat
exit
