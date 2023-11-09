import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

readData = pd.read_csv("D:\Git\Git\Gitcode\Swarm_code_test\ESO_picture.csv",header=None)
data = readData.iloc[:,36].tolist()       
print(data)
# data1 = data[0:15001]
# print(data1)
# y1 = []
# y1 = readData.loc[:,'I36']
# xData = list(range(1,len(data)+1))

# plt.plot(xData, y1, linestyle='-', color='b', label='Data1')              
# plt.title("time-distance")               
# plt.xlabel("time-500ms")                 
# plt.ylabel("distance")                   
# plt.show()       

# import csv
# import matplotlib.pyplot as plt

# exampleFile = open('D:\Git\Git\Gitcode\Swarm_code_test\ESO_picture.csv')
# exampleReader = csv.reader(exampleFile)
# exampleData = list(exampleReader)
# length_zu = len(exampleData)
# length_yuan = len(exampleData[0])
# xData = list(range(1,length_zu))
# y = list()
# for i in range(1, length_zu):
#     y.append(exampleData[i][1])
# plt.plot(xData, y, linestyle='-', color='b', label='Data1') 
# plt.xlabel("time")                 
# plt.ylabel("X distance") 
# plt.show()