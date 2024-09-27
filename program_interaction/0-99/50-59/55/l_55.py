"""Solution for pwn.college l-55 Program Interaction"""
import subprocess


def main():
    """Main Function"""

    p1 = subprocess.Popen(["/challenge/run"], stdout=subprocess.PIPE, text=True)
    p2 = subprocess.Popen(["/bin/grep", "*"], stdin=p1.stdout, stdout=subprocess.PIPE, text=True)
    p1.stdout.close()
    output, _ = p2.communicate()
    print(output)
    return



if "__main__" == __name__:
    main()
