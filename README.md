# Welcome to GDSC
Google Developers Student Club JIIT 128,  welcomes you to this GitHub repository for Hacktoberfest contributions. Through this repository, you will get a chance to contribute in open source and participate in hacktoberfest 2022.

## Instructions
In the section of ‘ALGORITHMS’ given below there are 2 types of algorithms present, you can work on both or either one of them. Use the programming language of your choice. If you wish to work on a program you must fork this repository and make make a pull request after you are done with it.

# ALGORITHMS
## 1st Algorithm - Volume Enhancer:

#### [HELP LINK](https://docs.fileformat.com/audio/wav/)

Write a program to modify the volume of an audio file. Where INPUT.wav is the name of an original audio file and OUTPUT.wav is the name of an audio file with a volume that has been scaled by the given factor.

WAV files are a common file format for representing audio. WAV files store audio as a sequence of “samples”: numbers that represent the value of some audio signal at a particular point in time. WAV files begin with a 44-byte “header” that contains information about the file itself, including the size of the file, the number of samples per second, and the size of each sample. After the header, the WAV file contains a sequence of samples, each a single 2-byte (16-bit) integer representing the audio signal at a particular point in time.Scaling each sample value by a given factor has the effect of changing the volume of the audio. Multiplying each sample value by 2.0, for example, will have the effect of doubling the volume of the origin audio. Multiplying each sample by 0.5, meanwhile, will have the effect of cutting the volume in half.

## 2nd Alogorithm - Inheritance
#### [HELP LINK](https://study.com/academy/lesson/blood-type-genetics.html#:~:text=Dominant%20alleles%20will%20mask%20recessive,they%20have%20two%20O%20genes.)
Simulate the inheritance of blood types for each member of a family.

A person’s blood type is determined by two alleles (i.e., different forms of a gene). The three possible alleles are A, B, and O, of which each person has two (possibly the same, possibly different). Each of a child’s parents randomly passes one of their two blood type alleles to their child. The possible blood type combinations, then, are: OO, OA, OB, AO, AA, AB, BO, BA, and BB. For example, if one parent has blood type AO and the other parent has blood type BB, then the child’s possible blood types would be AB and OB, depending on which allele is received from each parent. Similarly, if one parent has blood type AO and the other OB, then the child’s possible blood types would be AO, OB, AB, and OO.

```
Child (Generation 0): blood type OO
    Parent (Generation 1): blood type AO
        Grandparent (Generation 2): blood type OA
        Grandparent (Generation 2): blood type BO
    Parent (Generation 1): blood type OB
        Grandparent (Generation 2): blood type AO
        Grandparent (Generation 2): blood type BO
```

# Regards
We hope that you found this interesting and a good platform to learn and develop your skills. We wish you a happy coding journey!