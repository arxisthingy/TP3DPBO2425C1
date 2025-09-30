# TP3DPBO2425C1
## Janji
Saya Dzaka Musyaffa Hidayat dengan NIM 2404913 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram 

<img width="891" height="721" alt="diagram" src="https://github.com/user-attachments/assets/cdb3d6fe-ca26-40a5-ad63-6ff8d8474285" />

## Desain Program

**Penggunaan Inheritance untuk atribut umum**
- **Lokomotif** dan **Gerbong** merupakan turunan dari class **SaranaKereta**.
- **GerbongBarang** dan **GerbongPenumpang** merupakan turunan dari class **Gerbong**.
**Lokomotif** mewarisi seluruh atribut dari **SaranaKereta** dan memiliki atribut khusus yang dimiliki yaitu ``jenisMesin``, ``konfigurasiGandar``, dan ``jenisMotorTraksi``.  
**Gerbong** mewarisi seluruh atribut dari **SaranaKereta** dan memiliki atribut khusus yang dimiliki yaitu ``Trainmark``.  
**GerbongPenumpang** mewarisi seluruh atribut dari **Gerbong** dan memiliki atribut khusus yang dimiliki yaitu ``kapasitasPenumpang`` dan ``kelasLayanan``.  
**GerbongBarang** mewarisi seluruh atribut dari **Gerbong** dan memiliki atribut khusus yang dimiliki yaitu ``kapasitasAngkut`` dan ``tipeKargo``.  

**Composition digunakan dimana suatu class memiliki objek yang merupakan class lain**
- **Lokomotif** menggunakan class **Mesin** sebagai atribut
- **Gerbong** menggunakan class **Trainmark** sebagai atribut
- **KeretaApi** menggunakan class **Stasiun** sebagai atribut

## Atribut dan Methods Class

### SaranaKereta 
**Atribut:** `kodeSarana`, `namaSarana`, `beratSarana`, dan `tipeBogie`  
**Methods:** Getter & Setter  

### Mesin 

**Atribut:** `namaMesin`, `dayaMesin`, dan `silinder`
**Methods:** Getter & Setter 

### Trainmark

**Atribut:** `kodeTrainmark` dan `kecepatanMaks`
**Methods:** Getter & Setter 

### Lokomotif 
(Inheritance dari **SaranaKereta**)  
**Atribut:** `jenisMesin` (objek class **Mesin**), `konfigurasiGandar`, dan `jenisMotorTraksi`  
**Methods:** Getter & Setter dan `printInfo()` (untuk menampilkan informasi dari Lokomotif)   

### Gerbong
(Interitance dari **SaranaKereta**)  
**Atribut:** `trainmark` (objek class **Trainmark**)  
**Methods:** Getter & Setter  

### GerbongPenumpang
(Interitance dari **Gerbong**)  
**Atribut:** `kapasitasPenumpang` dan `kelasLayanan`  
**Methods:** Getter & Setter dan `printInfo()` (untuk menampilkan informasi dari GerbongPenumpang) 

### GerbongBarang
(Interitance dari **Gerbong**)  
**Atribut:** `kapasitasAngkut` dan `tipeKargo`  
**Methods:** Getter & Setter dan `printInfo()` (untuk menampilkan informasi dari GerbongBarang) 

### Kereta Api
**Atribut:** `kodeKeretaApi`, `namaKeretaApi`, `Lokomotif` (objek class **Lokomotif**), `Gerbong` (objek class **Gerbong**), `stasiunAwal` (objek class **Stasiun**), dan `stasiunAkhir` (objek class **Stasiun**)  
**Methods:** Getter & Setter,`addLokomotif()`, `addGerbong()`, `addStasiunAwal()`, `addStasiunAkhir()`, dan `printInfo()` (untuk menampilkan informasi dari KeretaApi)

## Alur Program  
- Program dimulai dan ditampilkan data awal (hardcode)
- Penambahan data baru secara statis
- Menampilkan ulang data setelah penambahan

## Dokumentasi

**1. C++**  

**2. Python**  

**3. Java**  

