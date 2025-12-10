@echo off
echo === CONFIGURANDO PROJETO CALCULADORA SFML ===
echo.

REM 1. Criar estrutura de pastas
echo Criando pastas...
if not exist ".vscode" mkdir ".vscode"
if not exist "src" mkdir "src"
if not exist "bin" mkdir "bin"
if not exist "assets" mkdir "assets"

REM 2. Criar c_cpp_properties.json
echo Criando c_cpp_properties.json...
echo { > .vscode\c_cpp_properties.json
echo     "configurations": [ >> .vscode\c_cpp_properties.json
echo         { >> .vscode\c_cpp_properties.json
echo             "name": "Win32", >> .vscode\c_cpp_properties.json
echo             "includePath": [ >> .vscode\c_cpp_properties.json
echo                 "${workspaceFolder}/src", >> .vscode\c_cpp_properties.json
echo                 "C:/SFML-3.0.2/include" >> .vscode\c_cpp_properties.json
echo             ], >> .vscode\c_cpp_properties.json
echo             "defines": [ >> .vscode\c_cpp_properties.json
echo                 "_DEBUG", >> .vscode\c_cpp_properties.json
echo                 "UNICODE", >> .vscode\c_cpp_properties.json
echo                 "_UNICODE", >> .vscode\c_cpp_properties.json
echo                 "SFML_STATIC" >> .vscode\c_cpp_properties.json
echo             ], >> .vscode\c_cpp_properties.json
echo             "compilerPath": "C:\\msys64\\mingw64\\bin\\g++.exe", >> .vscode\c_cpp_properties.json
echo             "cStandard": "c17", >> .vscode\c_cpp_properties.json
echo             "cppStandard": "c++17", >> .vscode\c_cpp_properties.json
echo             "intelliSenseMode": "windows-gcc-x64" >> .vscode\c_cpp_properties.json
echo         } >> .vscode\c_cpp_properties.json
echo     ], >> .vscode\c_cpp_properties.json
echo     "version": 4 >> .vscode\c_cpp_properties.json
echo } >> .vscode\c_cpp_properties.json

REM 3. Criar tasks.json
echo Criando tasks.json...
echo { > .vscode\tasks.json
echo     "version": "2.0.0", >> .vscode\tasks.json
echo     "tasks": [ >> .vscode\tasks.json
echo         { >> .vscode\tasks.json
echo             "label": "Compilar Calculadora", >> .vscode\tasks.json
echo             "type": "shell", >> .vscode\tasks.json
echo             "command": "C:\\msys64\\mingw64\\bin\\g++.exe", >> .vscode\tasks.json
echo             "args": [ >> .vscode\tasks.json
echo                 "-g", >> .vscode\tasks.json
echo                 "src/main.cpp", >> .vscode\tasks.json
echo                 "-o", >> .vscode\tasks.json
echo                 "bin/calculadora.exe", >> .vscode\tasks.json
echo                 "-I", "C:/SFML-3.0.2/include", >> .vscode\tasks.json
echo                 "-L", "C:/SFML-3.0.2/lib", >> .vscode\tasks.json
echo                 "-lsfml-graphics", >> .vscode\tasks.json
echo                 "-lsfml-window", >> .vscode\tasks.json
echo                 "-lsfml-system", >> .vscode\tasks.json
echo                 "-lsfml-audio", >> .vscode\tasks.json
echo                 "-mwindows", >> .vscode\tasks.json
echo                 "-DSFML_STATIC" >> .vscode\tasks.json
echo             ], >> .vscode\tasks.json
echo             "group": { >> .vscode\tasks.json
echo                 "kind": "build", >> .vscode\tasks.json
echo                 "isDefault": true >> .vscode\tasks.json
echo             } >> .vscode\tasks.json
echo         } >> .vscode\tasks.json
echo     ] >> .vscode\tasks.json
echo } >> .vscode\tasks.json

REM 4. Criar launch.json
echo Criando launch.json...
echo { > .vscode\launch.json
echo     "version": "0.2.0", >> .vscode\launch.json
echo     "configurations": [ >> .vscode\launch.json
echo         { >> .vscode\launch.json
echo             "name": "Executar Calculadora", >> .vscode\launch.json
echo             "type": "cppvsdbg", >> .vscode\launch.json
echo             "request": "launch", >> .vscode\launch.json
echo             "program": "${workspaceFolder}/bin/calculadora.exe", >> .vscode\launch.json
echo             "args": [], >> .vscode\launch.json
echo             "stopAtEntry": false, >> .vscode\launch.json
echo             "cwd": "${workspaceFolder}", >> .vscode\launch.json
echo             "environment": [], >> .vscode\launch.json
echo             "console": "integratedTerminal" >> .vscode\launch.json
echo         } >> .vscode\launch.json
echo     ] >> .vscode\launch.json
echo } >> .vscode\launch.json

REM 5. Copiar DLLs do SFML
echo Copiando DLLs do SFML...
xcopy "C:\SFML-3.0.2\bin\*.dll" "bin\" /Y >nul 2>&1

REM 6. Copiar fonte Arial para assets
echo Copiando fonte Arial...
copy "C:\Windows\Fonts\arial.ttf" "assets\" >nul 2>&1

echo.
echo === CONFIGURAÇÃO CONCLUÍDA! ===
echo.
echo PASSO A PASSO:
echo 1. Abra esta pasta no VS Code
echo 2. Cole seu código em src\main.cpp
echo 3. Pressione Ctrl+Shift+B para compilar
echo 4. Pressione F5 para executar
echo.
echo Pressione qualquer tecla para abrir VS Code...
pause >nul
code .