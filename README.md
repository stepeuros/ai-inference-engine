# AI Inference Engine

A simple **matrix multiplication engine** in C, built step-by-step from writing code in VS Code to compiling with Clang and running it.  
This README documents the **entire process** with screenshots.

---

## 🛠 Step 1 — Project Setup

1. Created project folders:

bash
mkdir ai-inference-engine
cd ai-inference-engine
mkdir src


2. Added initial files:
src/main.c → program entry point
src/matrix.c → matrix multiplication logic
src/matrix.h → header file for matrix functions
<img width="231" height="195" alt="step1folders" src="https://github.com/user-attachments/assets/8f585006-91fc-485b-a786-981700114174" />

matrix.h
<img width="905" height="210" alt="step2code" src="https://github.com/user-attachments/assets/180304d1-ec1a-418e-bbf1-9b4f11b6e8dd" />

matrix.c
<img width="904" height="257" alt="step2code2" src="https://github.com/user-attachments/assets/2f602bcc-c62d-4518-8616-4539b7c1852c" />

main.c
<img width="909" height="390" alt="step2code3" src="https://github.com/user-attachments/assets/5ec5f366-ba8d-490e-bc39-40495151ddd5" />

Installing Clang & Make
Installed MSYS2 and mingw-w64-x86_64-clang + make:
pacman -S mingw-w64-x86_64-clang make
clang --version
<img width="727" height="445" alt="step4make" src="https://github.com/user-attachments/assets/fa2cfefa-2a41-44a7-8226-5aaa95cdf1bb" />

Compiling the Program

From project root:
make clean
make

Output:
clang -O3 -march=native src/main.c src/matrix.c -o inference.exe
<img width="478" height="79" alt="step4makeclean" src="https://github.com/user-attachments/assets/9a7496ca-8dc8-4dc6-a3dd-ad82e0989a47" />

Running the Program
./inference.exe

Result:
19 22
43 50

<img width="573" height="39" alt="step6git" src="https://github.com/user-attachments/assets/88c0e716-7324-4528-b41c-54a04707e519" />









