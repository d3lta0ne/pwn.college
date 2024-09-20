import subprocess

def run_pipeline():
    p1 = subprocess.Popen(['/challenge/run'], stdout=subprocess.PIPE, text=True)
    p2 = subprocess.Popen(['/bin/grep', "*"], stdin=p1.stdout, stdout=subprocess.PIPE, text=True)
    p1.stdout.close()
    output, _ = p2.communicate()
    print(output)

if __name__ == "__main__":
    run_pipeline()