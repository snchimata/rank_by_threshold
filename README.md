# Rank by threshold cuts
C code to rank/bin by cummilative sum reset concept at the provided threshold.

Input CSV format: order column,value
Output CSV format: order column,value,rank

### Execution steps
#### Compile code
gcc rank.c -o ./rank

#### Provide input file to complied code to generate output
cat test.dat | ./rs >test.out

Special Thanks - Krishna Narayanan @Prokarma
