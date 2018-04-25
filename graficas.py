import matplotlib.pyplot as plt 
import numpy as np 


datos = np.genfromtxt("datos1.txt") 

plt.plot(datos[0,:], datos[:,0])
plt.savefig("figura1.png")
