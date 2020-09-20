import numpy as np
import matplotlip.pyplot as plt

datax, datay = np.loadtxt("datos.txt", unpack = True) #para leer archivo de texto

fig, ax = plt.subplots() 
ax.plot(datax, datay, 'r-o', label="Data")
ax.legend()
ax.set_xlabel("Numero de terminos")
ax.set_ylabel("Delta %")

fig.savefig("fig.pdf")
