import wave, numpy, struct
import os

path = input("Enter the path where wav files are stored")

files = os.listdir(path)

for file in files:
    if not file.endswith('.wav'):
        continue
    w = wave.open(file,"rb")
    p = w.getparams()
    f = p[3]
    s = w.readframes(f)
    w.close()


    s = numpy.fromstring(s, numpy.int16) / 10 * 5
    s = struct.pack('h'*len(s), *s)

    w = wave.open(file,"wb")
    w.setparams(p)
    w.writeframes(s)
    w.close() 
