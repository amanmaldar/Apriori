//
// Created by Lenovo on 3/26/2018.
//

#ifndef APRIORI_APRIORI_H
#define APRIORI_APRIORI_H
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
#include <time.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_set>
#include <iomanip>
#include <typeinfo>
#include "chrono"

using namespace std;


//-------------------containers---------------------------
vector <int> L1;


typedef struct{
    int a=0;
    int b=0;
    int freq=0;
}TwoStruct;
TwoStruct twoStruct;
vector <TwoStruct> C2, L2;


typedef struct {
    int a;
    int b;
    int c;
    int freq;
} ThreeStruct;
ThreeStruct threeStruct;
vector< ThreeStruct > L3,C3;

typedef struct {
    int a;
    int b;
    int c;
    int d;
    int freq;
} FourStruct;
FourStruct fourStruct;
vector <FourStruct> C4,L4;

//-----------------------------------------------------------


//-------------------functions------------
void Execute();


//----------------varibles---------------------

int TID_Transactions = 1;

double minSupport;
double minConfidence;
int number_of_strong_rules=0;

int one_freq_itemset=0;
int two_freq_itemset=0;
int three_freq_itemset=0;
int four_freq_itemset=0;

#define maxItemID 200 //8
#define maxTransactions 200 //6
//int maxItemID = 8;

string fileName;
int totalItems;

// itemIDcount is used to store number of times particular itemID appears in dataset.
// It is used to determine support for single elements. itemID will go from 1 to maxItemID
vector <int> itemIDcount;
//int itemIDcount[maxItemID];


// A single vector is associated with every itemID.
// That vector stores the TID [Transaction ID] in which particular itemID appears.
vector <vector <int>> itemId_TidMapping;




//----------------------------------------

#endif //APRIORI_APRIORI_H
