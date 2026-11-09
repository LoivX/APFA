import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt('data.txt')

plt.plot(data[:, 0], data[:, 1], marker = 'o')
plt.gca().invert_xaxis()
plt.xscale('log')
plt.xlabel('precision (log scale)')
plt.ylabel('Number of iterations')
plt.title('Iterations vs precision')
plt.legend()
plt.savefig('plot.png')