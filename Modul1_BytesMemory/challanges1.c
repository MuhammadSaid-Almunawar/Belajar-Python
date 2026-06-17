##1.	Buat fungsi xor_bytes(data: bytes, key: int) -> bytes yang meng-XOR setiap byte dalam data dengan key. 
  #Test dengan data = b"Hello" dan key = 0x41. Verifikasi bahwa XOR dua kali menghasilkan data asli.
def xor_bytes(data, key):
    hasil = []
    for b in data : 
        hasil.append (b ^ key)
    return bytes(hasil) # karena ada bytes = b')$--.'

def decrypted(encrypted, key) :
    hasil = []
    for c in encrypted:
        hasil.append(c ^ key)
    return bytes(hasil)


encrypted = xor_bytes(b"hello", 0x41)
decrypted_data = decrypted(encrypted, 0x41 ) 

print(encrypted)
print(decrypted_data)
