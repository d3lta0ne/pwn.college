"""Module solving pwncollege program interaction l-53."""

import subprocess

# def create_password():
#     """Function for passing the hardcoded password 'jmvhumwc' reveresed."""
#     hardcoded_password="jmvhumwc"
#     with open('password', 'w', encoding="utf-8") as file:
#         file.write(hardcoded_password[::-1])

def main():
    """Main function"""
    # create_password()
    p1 = subprocess.Popen(['/run/workspace/bin/rev','password'], stdout=subprocess.PIPE, text=True)
    p2 = subprocess.Popen(['/challenge/run'], stdin=p1.stdout, stdout=subprocess.PIPE, text=True)
    p1.stdout.close()
    output, _ = p2.communicate()
    print(output)
    return

if __name__ == "__main__":
    main()
