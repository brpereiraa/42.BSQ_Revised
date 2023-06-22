# **BSQ_Revised**
This project is a (possible) fix for the [BSQ](https://github.com/brpereiraa/42.piscine/tree/main/C/BSQ) done during the piscine.  

### **About**
BSQ is about receiving a map with open spaces and obstacles and with the open spaces, creating the biggest square possible. If there is more than 1 square with the biggest length, than it should create to one furthest to the beggining of the map. 

During the piscine our project failed because we didn't take into consideration a 1x1 map and that was the first test so we failed BSQ. In this the 1x1 map works, however, the project never got to be tested and it might or might not be correct.

There was some code clean up in this version, which made functions smaller and a header file was also added.

### **Instructions**
To run this project you can use the 3 maps within the "maps" folder, or create your own with pearl.

**1.** To **create a map** with pearl, run the following command:
**./Pearl {width} {height} {density} > {file}**

```sh
$ ./Pearl 40 30 3 > maps/map_40x30
```

**2.** Now we need to **create the executable with make.** For this simply run make.

```sh
$ Make
```

**3.** At last we **run the executable** with the map we want to run as argument.

```sh
$ ./bsq maps/map_40x30
```