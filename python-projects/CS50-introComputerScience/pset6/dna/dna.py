import csv
import sys

# confirm correct arguments
if len(sys.argv) != 3:
    print("Usage: python dna.py data.csv sequence.txt")
    exit(1)

# open text file, read
txtFile = open(sys.argv[2], "r")
sequence = txtFile.read()

# open csv file, read, check for matches
with open(sys.argv[1]) as csvfile:
    dnaCSV = csv.reader(csvfile, delimiter=',')
    # skip first row in database
    strand = next(dnaCSV)[1:]
    # compute longest strands of STRs
    counter = 0
    maxcount = []
    currentmax = 0

    # iterate over txtFile
    for i in range(len(strand)):
        n = len(strand[i])
        maxcount.append(0)
        for j in range(len(sequence)):
            while sequence[j:j+n] == strand[i]:
                counter += 1
                j += n
                # max count
            if counter > currentmax:
                currentmax = counter
                counter = 0
                if currentmax > maxcount[i]:
                    maxcount.remove(maxcount[i])
                    maxcount.append(int(currentmax))
            counter = 0
            currentmax = 0

    # compare STR repeats to dnaCSV
    for line in dnaCSV:
        name = line[0]
        data = [int(val) for val in line[1:]]
        if data == maxcount:
            print(name)
            exit(0)
    print("No Match")
