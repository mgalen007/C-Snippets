import subprocess

# Read the filename
filename = input("Enter the file to run: ")

# Remove .c / .cpp extension if present to get the executable name
if filename.endswith('.c'):
    exe_name = filename.replace('.c', '')
elif filename.endswith('.cpp'):
    exe_name = filename.replace('.cpp', '')

# Compile it to an executable
compile_cmd = f'gcc "{filename}" -o "{exe_name}.exe"'
print(f"Compiling: {compile_cmd}")
result = subprocess.run(compile_cmd, shell=True)

if result.returncode == 0:
    # Run the .exe file
    run_cmd = f'"{exe_name}.exe"'
    print(f"\nRunning: {run_cmd}\n")
    subprocess.run(run_cmd, shell=True)
else:
    print("Compilation failed!")

