d = {'A':5, 'C':4}
print(d) # {'A':5, 'C':4}
d['K'] = 7
print(d) # {'A':5, 'C':4, 'K':7}
del d['C']
print(d) # {'A':5, 'K':7}
d['K']=6
print(d)  # {'A':5, 'K':6}