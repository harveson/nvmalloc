import os

os.system('rm -rf out_chain')
n = 64 
count = 1
while count <= 16: 
	print "Count: %s\n" %count
	#os.system('echo "#define ELEMSZ %s" > memlat.h' %n)
	os.system('gcc -ggdb3 memlat_chain.c -L. -o memlat_chain -lrdpmc -lnuma')
	os.system('time ./memlat_chain 3242354 %s 1000000 0 0 >>out_chain' %count) 
	os.system('time numactl --cpunodebind=0 --membind=1 ./memlat_chain 3242354 %s 1000000 0 0 >>out_chain' %count) 
	count += 1

print 'done'

