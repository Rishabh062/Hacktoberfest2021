# Import libraries
from matplotlib import pyplot as plt
import numpy as np


# Creating dataset
size = 6
cars = ['AUDI', 'BMW', 'FORD',
		'TESLA', 'JAGUAR', 'MERCEDES']

data = np.array([[23, 16], [17, 23],
				[35, 11], [29, 33],
				[12, 27], [41, 42]])

# normalizing data to 2 pi
norm = data / np.sum(data)*2 * np.pi

# obtaining ordinates of bar edges
left = np.cumsum(np.append(0,
						norm.flatten()[:-1])).reshape(data.shape)

# Creating color scale
cmap = plt.get_cmap("tab20c")
outer_colors = cmap(np.arange(6)*4)
inner_colors = cmap(np.array([1, 2, 5, 6, 9,
							10, 12, 13, 15,
							17, 18, 20 ]))

# Creating plot
fig, ax = plt.subplots(figsize =(10, 7),
					subplot_kw = dict(polar = True))

ax.bar(x = left[:, 0],
	width = norm.sum(axis = 1),
	bottom = 1-size,
	height = size,
	color = outer_colors,
	edgecolor ='w',
	linewidth = 1,
	align ="edge")

ax.bar(x = left.flatten(),
	width = norm.flatten(),
	bottom = 1-2 * size,
	height = size,
	color = inner_colors,
	edgecolor ='w',
	linewidth = 1,
	align ="edge")

ax.set(title ="Nested pie chart")
ax.set_axis_off()

# show plot
plt.show() 
