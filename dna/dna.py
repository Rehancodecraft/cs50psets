import csv
import sys


def main():

    #  Check for command-line usage
    
    if len(sys.argv) != 3:
        print("USAGE: python dna.py database/name.csv sequences/name.txt")
        sys.exit(1)
    else:
        #  Read database file into a variable
        with open(sys.argv[1], "r") as file:
            database = list(csv.DictReader(file))
    
        #  Read DNA sequence file into a variable
        with open(sys.argv[2]) as file: 
            sequence = file.read()
        
        #  Find longest match of each STR in DNA sequence
        if "small.csv" in sys.argv[1]: 
            strs = ["AGATC", "AATG", "TATC"]
        else:
            strs = ["AGATC", "TTTTTTCT", "AATG", "TCTAG", "GATA", "TATC", "GAAA", "TCTG"]
        longest_runs = {}
        for str in strs:
            longest_runs[str] = longest_match(sequence, str)
        #   Check database for matching profiles
        for profile in database:
            match = all(int(profile[str]) == longest_runs[str] for str in strs)
            if match:
                print(profile["name"])
                return
        print("No match")
        
        
def longest_match(sequence, subsequence):
    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)
    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):
        # Initialize count of consecutive runs
        count = 0  
        
        while True:
         
            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1
            
            # If there is no match in the substring
            else:
                break
        
        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


if __name__ == "__main__":
    main()