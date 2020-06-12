from cs50 import get_float


def main():
    change = 0
    # coin amounts
    quarter = 25
    dime = 10
    nickel = 5
    penny = 1
    # prompt user input
    dollars = get_dollars()
    # convert float into int value
    total = round(dollars * 100)

    # loop for quarter
    while total >= quarter:
        total = total - quarter
        change += 1
    # loop for dime
    while total >= dime:
        total = total - dime
        change += 1
    # loop for nickel
    while total >= nickel:
        total = total - nickel
        change += 1
    # loop for penny
    while total >= penny:
        total = total - penny
        change += 1
    # print num of coins
    print(change)


def get_dollars():
    while True:
        d = get_float("Change owed: ")
        if d > 0:
            break
    return d


main()
