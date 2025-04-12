/*
In your study notebook, write down questions to distinguish between the five 
kinds of vertebrates: mammals, birds, fish, amphibians and reptiles. It’s easier if 
you ”divide and conquer” by designing a question to split all vertebrates into two 
groups, to distinguish the mammals and birds from the fish, amphibians and reptiles. 
Then design questions to distinguish mammals from birds, and reptiles from fish and 
amphibians, and finally fish from amphibians.
====================================================================================

Decision Tree for Classifying Vertebrates
1. First Question (Split Warm-blooded vs Cold-blooded):
Q: Is the animal warm-blooded? (Y/N)

Y → Mammal or Bird

N → Fish, Amphibian, or Reptile

2a. For Warm-blooded Animals (Mammals/Birds):
Q: Does it suckle its young with milk? (Y/N)

Y → Mammal

N → Bird

2b. For Cold-blooded Animals (Fish, Amphibians, Reptiles):
Q: Does the animal have scales? (Y/N)

Y → Fish or Reptile

N → Amphibian

3. For Scaled Cold-blooded Animals (Fish/Reptiles):
Q: Does it breathe through gills at any life stage? (Y/N)

Y → Fish

N → Reptile

*/
