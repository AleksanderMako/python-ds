import csv
import statistics

class Exercise1:

    def __init__(self):
        self.table ={}
        self.columnMapper = {0:'SepalLength',1:'SepalWidth',2:'PetalLength',3:'PetalWidth'}
        self.statsTable ={}
    def readFile(self):
        with open('iris.num.only.csv',newline='') as csvfile:
            irisReader = csv.reader(csvfile,delimiter =',',quotechar='|')
        
            rowIdx=0
            for row in irisReader:
                for index in range(len(row)):
                    
                    if rowIdx > 0:
                        if self.columnMapper[index] not in self.table:
                            self.table[self.columnMapper[index]] =[]
                        self.table[self.columnMapper[index]].append(float(row[index]))
                       
                rowIdx+=1
        print(self.table)

    def makeStatisticsTable(self):

        for k,v in self.table.items():

            if k not in self.statsTable:
                self.statsTable[k]={"min":0,"max":0,"mean":0,"median":0,"variance":0.0}
            
            self.statsTable[k]["min"] = min(v)
            self.statsTable[k]["max"] = max(v)
            self.statsTable[k]["mean"] = sum(v)/len(v)
            self.statsTable[k]["median"] = statistics.median(v)
            self.statsTable[k]["variance"] = statistics.variance(v)
        print(self.statsTable)








obj = Exercise1()

obj.readFile()
obj.makeStatisticsTable()