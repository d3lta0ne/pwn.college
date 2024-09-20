import subprocess

def main():
    p1 = subprocess.Popen(['/challenge/run'], stdout=subprocess.PIPE, text=True)
    p2 = subprocess.Popen(['/run/workspace/bin/sed', ''], stdin=p1.stdout, stdout=subprocess.PIPE, text=True)
    p1.stdout.close()
    output, _ = p2.communicate()
    print(output)
    return

if __name__ == "__main__":
    main()