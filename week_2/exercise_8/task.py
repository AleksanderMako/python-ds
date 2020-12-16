import numpy as np 
import re


x = np.ones((3,3),dtype=int)

# pading with concat 
print( np.concatenate([np.zeros((1,5),dtype=int),np.concatenate([np.concatenate([ np.concatenate([np.zeros((3,1),dtype=int),x]
    ,axis=1)
    ,np.zeros((3,1),dtype=int)],axis=1)
    ,np.zeros((1,5),dtype=int)],axis=0)

],axis=0)
   )

e = np.array([1,2,3,4,5,6])
y = np.array([2,3,6])
print(np.in1d(e,y))
print(np.intersect1d(e,y))

matrix = np.random.randint(100,size=(3,3))
print(matrix)
print('===================================================')
print(np.sort(matrix,axis=1))
print('===================================================')
print(np.sort(matrix,axis=0))
print('===================================================')
print(matrix[np.argsort(matrix[:,1])])
print('===================================================')
print(np.array([range(5) for i in range(5)]))
print('===================================================')
s = np.arange(201)
print(np.sum(s,where=[x%7 or x%11 for x in range(201)]))
print('===================================================')

nums = np.arange(36)
nu1 = np.reshape(nums,[4,9])
print(np.where(np.any(nu1 > 10,axis=1)))
print('===================================================')
np.random.seed(1)
rand_arr = np.array([np.random.randint(-100,101)for i in range (10)])
print(rand_arr)
print(np.partition(rand_arr,4))
print('===================================================')

#join arrays along new axis 

a1 = np.array([1,2,3,4])
a2 = np.array([1,2,3,4])

print(np.vstack((a1,a2)))
print('===================================================')
# remove single dimentinal entries

print(np.zeros((3,1,4)))


np.arange(12)

