flag_rand=5
compare=[123,81,124,74,150,29,127,94,126,88,143,72,114,29,143,66,129,88,126,86,148,66,123,81,73,24,82,96]
i=-1
result=0
for x in compare:
	i=i+1
	k=i%2
	if  k==0 :
		result=x-24
		flag=result^5
		print(chr(flag),end="")
	else :
		result=x+24
		flag=result^5
		print(chr(flag),end="")

print ()