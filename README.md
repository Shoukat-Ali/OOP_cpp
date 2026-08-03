# Object-Oriented Programming (OOP) in C++

Welcome to the code repository for the 2nd-semester BS Computer Science course on Object-Oriented Programming. This repository contains source code, and examples from the textbook and the course instructor to support student learning and comprehension.

## Primary Textbook

C++ How to Program (10th Edition) by Paul J. Deitel and Harvey Deitel.

## Development Environment

To compile and run the code in this repository, students will need a standard C++ development environment.
- Compiler: GNU C++ Compiler (GCC)
- Recommended Setup: MSYS2 (MinGW-w64) for Windows users.
- IDE/Editor: Visual Studio Code.

## Setting up environment on Windows machine

### Step 1: Install MSYS2 (The modern way to get g++)
The best way to install the GNU toolchain on Windows today is through MSYS2, which provides a clean environment and a package manager.  
1. **Download:** Go to msys2.org and download the installer (e.g., msys2-x86_64-2026xxxx.exe)
2. **Install:** Run the installer and follow the prompts. Use the default installation folder (C:\msys64)
3. **Launch:** When the installation finishes, ensure "Run MSYS2 now" is checked. A terminal window will open

### Step 2: Install the C++ Toolchain
In the MSYS2 terminal that just opened, you need to tell it to download the actual compiler.  
1. Copy and paste the following command into the MSYS2 terminal:  
        `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`
2. Press Enter when it asks which members to install (default = all)  
3. Type Y and press Enter to proceed with the installation. This will download g++, gcc, and gdb (the debugger)

### Step 3: Add to System Path (Crucial Step)
Even though g++ is now on your computer, Windows doesn't "see" it yet from the standard Command Prompt or VS Code.  
1. In your Windows search bar, type "Edit the system environment variables" and open it  
2. Click the Environment Variables button.  
3. Under "System variables," find the Path variable, select it, and click Edit.  
4. Click New and paste this path `C:\msys64\ucrt64\bin`  
5. Click OK on all windows to save.

### Step 4: Verify the Installation
Open the Command Prompt (cmd) and type:
		`g++ --version`

If you see a version number (e.g., 13.2.0), you’ve successfully installed GNU C++!

### Step 5: Setting up VS Code
Now that you have the "stove," you can go back to the "kitchen":  
1. Open VS Code.  
2. Go to the Extensions view (the square icon on the left).  
3. Search for and install the "C/C++" extension by Microsoft.  
4. Create a file named hello.cpp, paste some code, and you can now use the "Play" button in the top right to compile and run your code.
