# PROGRAM INPUT DATA NILAI AKHIR MAHASISWA
<h3>State Transition Testing : </h3>
<ul type="circle">
  <li>Ketika masuk ke program, user akan diharuskan untuk login dengan menggunakan username "user" dan password "pass".</li>
  <li>User diberi kesempatan 3 kali untuk memasukkan username dan password dengan benar.</li>
  <li>Apabila user berhasil memasukkan username password dengan benar, maka user akan diberikan akses ke program 'INPUT DATA NILAI AKHIR' mahasiswa.</li>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106191599760842842/image.png"/>
  <li>Namun ketika user sudah gagal 3 kali, akan muncul message "MAXIMUM ATTEMPTS REACHED" dan program akan berhenti.</li>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106191278850461767/image.png"/>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106191358722588723/image.png"/>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106191520601735218/image.png"/>
</ul>

<h3>Boundary Value Analysis : </h3>
<ul type="circle">
  <li>Di dalam program, terdapat 3 pilihan menu yaitu Input nilai, lihat data, dan keluar </li>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106191637178232832/image.png"/>
  <li>Pada menu input nilai, terdapat field yang harus diisi terlebih dahulu yaitu banyaknya data mahasiswa yang ingin diinputkan</li>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106191686058655754/image.png"/>
  <li>Setelah itu akan ada data yang perlu diisi, termasuk data nilai akhir mahasiswa</li>
  <li>Apabila user menginputkan nilai antara 1-100, maka akan langsung tercatat pada struct</li>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106192799398887454/image.png"/>
  <li>Namun apabila user menginputkan nilai diluar itu, maka akan ada message "Nilai tidak valid, masukkan nilai 1 hingga 100" dan user diharuskan menginputkan data dengan benar </li>
  <p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106192653390979143/image.png"/>
</ul>

<h3>Isi Menu 'Lihat Data'  : </h3>
<p><img src="https://cdn.discordapp.com/attachments/734105016276746341/1106192912267608064/image.png"/>

<h3>Kekurangan Program Ini :</h3>
<ul type="circle">
  <li>Data yang tersimpan bersifat temporary atau sementara, sehingga ketika program dijalankan ulang data yang sebelumnya akan hilang</li>
  <li>Data akan tertimpa jika user mencoba untuk menginputkan untuk ke 2 kali dan seterusnya, akibatnya user hanya memiliki 1 waktu untuk menginputkan data sekaligus, apabila user mencoba menambahkan data lagi, data sebelumnya akan direwrite dengan data yang baru</li>
  <li>Program tidak dinamis, dan dibuat statis hanya dapat digunakan untuk menginput 11 data maksimal</li>
