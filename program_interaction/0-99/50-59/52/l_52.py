import subprocess

def createPassword():
    with open('password', 'w', encoding="utf-8") as file:
        file.write("pslelrml")

def main():
    createPassword()
    p1 = subprocess.Popen(['/bin/cat','password','-'], stdout=subprocess.PIPE, text=True)
    p2 = subprocess.Popen(['/challenge/run'], stdin=p1.stdout, stdout=subprocess.PIPE, text=True)
    p1.stdout.close()
    output, _ = p2.communicate()
    print(output)
    return

if __name__ == "__main__":
    main()