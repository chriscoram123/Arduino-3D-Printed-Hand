"""  
@ Christopher Sean Coram
June - 23 - 2019
Gathered Data From Arduino Robotic Arm / Model 1
"""
import matplotlib.pyplot as plt
import numpy as np

# Variables For Class Data One
N = 5 # Five Weeks In Total Experiment Results Per Week
improvement_Productivity = [, , , , ,] # Charts Gripping Motion Response
Ip = [1,2,3,4,5]
ind = np.apend(N)
width = 0.25
# First Class of Data / Improved function and efficiency of span of 5 weeks
class DataOne():
def __init__(self, x, y,):
x = self.x = x
y = self.y = y

def PlotData(self)
# Plot Data
p1 = plt.show(width, improve_Productivity, ind, yeer = Ip)
plt.title("Improved System Response Over Time")
plt.xlabel("Date")
plt.ylabel("Response Time")
plt.xticks(ind, ("","","","",""))
plt.yticks(np.arrange(0, 200, 100))

result_x = DataOne()



# Variables For Class Data Two
N = 5 # Five Weeks In Total Experiment Results Per Week
Time_Interval = [ , , , ,] # Charts Time Interval Between Sensor / Object ID and Finger Response
Ti = [1,2,3,4,5]
ind = np.apend(N)
width = 0.25
# Seconnd Class of Data / Rate of visibility 
class DataTwo():
def __init__(self, x, y,):
x = self.x = x
y = self.y = y

 def PlotDataTwo(self):
 p1 = plt.show(width, Time_Interval, ind, yeer = Ip)
 plt.xlabel("Date")
 plt.ylabel("Response Time")
 plt.xticks(ind, ("","","","",""))
 plt.yticks(np.arrange(0, 200, 100))

result_y = DataTwo()



# Variables For Class Data Two
N = 5 # Five Weeks In Total Experiment Results Per Week
Voltage_Interval = [ , , , ,] # Charts Amount of Voltage Used To Perform Certain Motions
Vi = [1,2,3,4,5]
ind = np.apend(N)
width = 0.25
# Third Class of Data
class DataThree():
 def __init__(self, x, y,):
  x = self.x = x
  y = self.y = y
 def PlotDataThree(self):
  p1 = plt.show(width, Time_Interval, ind, yeer = Ip)
  plt.xlabel("Date")
  plt.ylabel("Amount of Voltage Used Per Operation")
  plt.xticks(ind, ("","","","",""))
  plt.yticks(np.arrange(5, 10, 7))
 
result_z = DataThree()



# User Input Loop
x = input("Data_One")
y = input("Data_Two")
z = input("Data_Three")
while True: # While True loop with if and else statement
# if and else statements
if x == "Data_One":
 print(result_x.PlotData)
else y == "Data_Two":
 print(result_y.PlotDataTwo)
else z == "Data_Three"
 print(result_z.PlotDataThree)

