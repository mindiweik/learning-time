from cs50 import get_int

def main():

    # prompt user for input
    i = get_positive_int()

    # loop for row
    for j in range(i):
        # loop for space
        for k in range(i - j - 1):
            print(" ", end="")
        # loop for hash
        for m in range(j + 1):
            print("#", end="")
        print("  ", end="")
        for n in range(j + 1):
            print("#", end="")
        print()


def get_positive_int():
    while True:
        # prompt user for input
        n = get_int("Height: ")
        if n > 0 and n < 9:
            break
    return n

main()
