import os

returnID = os.system('g++ -o clearData data_clear.cpp -O2 -std=c++14 -w && ./clearData')
if returnID != 0:
    print('Fail to clear Data')
    exit(-1)

returnID = os.system('g++ -o insertionData data_make.cpp -O2 -std=c++14 -w')
if returnID != 0:
    print('Fail to make Insertion Data Generator!')
    exit(-1)

returnID = os.system('g++ -o queryData data_make_query.cpp -O2 -std=c++14 -w')
if returnID != 0:
    print('Fail to make Query Data Generator!')
    exit(-1)
print(1)
os.system('./insertionData > tmp && ./queryData > tmp && rm tmp')
returnID = os.system('g++ -o BTree BTree.cpp -O2 -std=c++14 -g')
if returnID != 0:
    print('Fail to make your BTree, please check whether there exists any compilication error!')
    exit(-1)
print(2)
os.system('g++ -o target sql_checker.cpp -O2 -std=c++14 -w -l sqlite3')
print('[Accepted] Compiling')
os.system('./target')
