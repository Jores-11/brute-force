import time
import string
import itertools
#step 1: Ask the user to input a password
password = input("Enter a password to test: ")

#step 2: Define the possible characters
characters= string.ascii_letters + string.digits 

#step 3: initialize our variables
found = False 
attemps = 0
start_time = time.time()

#step 4: start the brute force process
print("starting brute force attack...")
for length in range(1,len(password)+1): # Incrementing the length 
    for attemp in itertools.product(characters,repeat=length):# generate combinations
        attemps +=1
        attemp_password =''.join(attemp)# convert tuple to string
        if attemp_password == password:
            found = True
            break 

    if found:
        break  


#step 5: Calculate duration 
end_time = time.time() 
duration = end_time - start_time      

#step 6: Display the results
print("Password found: ", attemp_password)
print(" Number of attemps: ", attemps)
print("Total time taken: ",duration)