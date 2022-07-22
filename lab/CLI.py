import sys
def fun1():
    print(f"Arguments count: {len(sys.argv)}")
    for i, arg in enumerate(sys.argv):     
        print("Argument {}: {}".format(i, arg))
        #print(f"Argument {i}: {arg}")

def fun2():
    print("Name of the script      :  {}".format(sys.argv[0]))
    print("Arguments of the script :  {}".format(sys.argv[1:]))
    # print(f"Name of the script      : {sys.argv[0]=}")
    # print(f"Arguments of the script : {sys.argv[1:]=}")

if __name__ == "__main__":
    #fun2()
opts = [opt for opt in sys.argv[1:] if opt.startswith("-")]
args = [arg for arg in sys.argv[1:] if not arg.startswith("-")]

if "-c" or "--c" in opts:
    print(" ".join(arg.capitalize() for arg in args))
elif "-u" in opts:
    print(" ".join(arg.upper() for arg in args))
elif "-l" in opts:
    print(" ".join(arg.lower() for arg in args))
else:
    raise SystemExit(f"Usage: {sys.argv[0]} (-c | -u | -l) <arguments>...")