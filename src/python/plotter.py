import matplotlib.pyplot as plt
import os


def xvuPlotter(filename):
    file1 = open(filename, 'r').read()
    lines = file1.split('\n')
    x = []
    v = []
    u = []
    for line in lines:
        try:
            x.append(float(line.split(' ')[0]))
            v.append(float(line.split(' ')[1]))
            u.append(float(line.split(' ')[2]))
        except:
            IndexError
            continue

    n = len(x)
    plt.figure()
    if n > 10000:
        plt.plot(x[::5], v[::5])
        plt.plot(x[::5], u[::5])
    else:
        plt.plot(x, v)
        plt.plot(x, u)
    plt.xlabel(r'x')
    plt.ylabel(r'$u(x), v(x)$')
    plt.title(r'Plot of $v(x)$ compared to $u(x)$ for n= ' + str(n-2))
    plt.savefig('../../plots/xuv_plot' + str(n-2) + '.pdf')


def errorPlot(path, filename):
    file1 = open(path+filename, 'r').read()
    lines = file1.split('\n')
    err = []
    logh = []
    count = 0
    for line in lines:
        try:
            err.append(float(line.split(' ')[0]))
            logh.append(float(line.split(' ')[1]))
        except:
            IndexError
            continue
    plt.figure()
    plt.plot(logh, err, '*-', color="red")
    plt.xlabel(r'$log(h)$')
    plt.ylabel(r'max$(\epsilon_n)$')
    plt.title(r'Plot for relative error for with increasing n-values')
    plt.savefig('../../plots/' + filename + 'plot.pdf')


def main():
    path_output = '../../data/output'
    for filename in os.listdir(path_output):
        if filename.endswith(".dat"):
            xvuPlotter(path_output + '/' + filename)
        else:
            continue
    path_error = '../../data/error'
    for filename in os.listdir(path_error):
        if filename.endswith(".txt"):
            errorPlot(path_error + '/', filename)
        else:
            continue


main()
