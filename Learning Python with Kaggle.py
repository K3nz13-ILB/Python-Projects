# Variables representing the number of candies collected by alice, bob, and carol
alice_candies = int(input("Input Alice's candies:"))
bob_candies = int(input("Input Bob's candies:"))
carol_candies = int(input("Input Carol's candies:"))

# Your code goes here! Replace the right-hand side of this assignment with an expression
# involving alice_candies, bob_candies, and carol_candies
total_candies = int(alice_candies) + int(bob_candies) + int(carol_candies)
a = total_candies % 3
to_smash = -1

print('Total number of candies:', total_candies)
print('They must smash',a,'number of candies.')