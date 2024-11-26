def cycle_Sort(array):
  write = 0
   
  for cycle in range(0, len(array) - 1):
    ele = array[cycle]
     
    position = cycle
    for i in range(cycle + 1, len(array)):
      if array[i] < ele:
        position += 1
     
    if position == cycle:
      continue
     
    while ele == array[position]:
      position += 1
    array[position], ele = ele, array[position]
    write += 1
     
    while position != cycle:
       
      position = cycle
      for a in range(cycle + 1, len(array)):
        if array[a] < ele:
          position += 1
       
      while ele == array[position]:
        position += 1
      array[position], ele = ele, array[position]
      write += 1
   
  return write
   
# driver code
array = [2, 4, 5, 1, 3]
print("The original array is:", array)
n = len(array)
cycle_Sort(array)
print("The sorted array is: ",array)
