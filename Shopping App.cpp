 
 #include <iostream>

int main() {
	// Her alt baþlýk için islem adýnda integer oluþturdum.1-2-3-4 diye sýraladým ve en geniþ baþlýk olan "islem" için 0 deðerini atadým. Ýleride buraya dönmek istediðimde islem=0 komutunu kullanacaðým.
	// Hesabýn tutarý uzun bir sayý çýkabileceðinden dolayý long olarak tanýmladým ve en baþta sýfýrdan baþlamasý gerektiðini düþündüðümden 0 deðerini atadým.
	int islem=0,islem1,islem2,islem3,islem4;
	long hesap=0,indirimli=0;
    while(islem==0)
	{
    printf("\n         **>> Alp Elektronik <<**      ");
    printf("\n---------------Hosgeldiniz---------------");
	printf("\n\n******************************************\n");
    printf("Lutfen yapmak istediginiz islemin yanindaki numarayi tuslayin.\n");
    printf("1-Urun ve Fiyat Sorgula\n2-Sepete Urun Ekle\n3-Siparis Tamamla\n4-Sonlandir");
    printf("\nIstenilen islem:");
	scanf("%d",&islem);   
        while(islem<=0 || islem>=5)
        {
        	printf("\nHatali giris yaptiniz. Lutfen tekrar deneyiniz: ");
	    	scanf("%d",&islem);
			if(islem==1)
			{
				islem=0;
				islem=1;
			}
			else if(islem==2)
			{
				islem=0;
				islem=2;
			}
			else if(islem==3)
			{
				islem=0;
				islem=3;
			}
			else if (islem==4)
			{
				islem=0;
				islem=4;
			}	
		}
		
		while(islem==1)	
		{
			printf("\n\n******************************************\n");  
		    printf("Urun ve Fiyat Sorgulama Ekrani\n\n");
     	    printf("Hangi Kategoriden Urun Sorgulamak Istiyorsunuz?\n");
     	    printf("1-Akilli Telefon\n2-Akilli Saat\n3-Kablosuz Kulaklik\n4-Bilgisayar\n");
		    printf("******************************************\n");
		    printf("Seciminiz: ");
	        scanf("%d",&islem2);
	        while (0>=islem2 || islem2>=5)
			{
				printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
				printf("\nSeciminiz: ");
				scanf("%d", &islem2);
			}
			if (islem2==1)	
			{
			    printf("\n------Akilli Telefon------\n");
			    printf("\n Akilli telefon-1: 3099 TL");
			    printf("\n Akilli telefon-2: 2799 TL");
			    printf("\n Akilli telefon-3: 1899 TL");
		     	printf("\n Akilli telefon-4: 2149 TL");	
	        }
	        else if(islem2==2)
	        {
			    printf("\n------Akilli Saat------\n");
			    printf("\n Akilli Saat-1: 999 TL");
			    printf("\n Akilli Saat-2: 899 TL");
		    	printf("\n Akilli Saat-3: 1499 TL");
		    	printf("\n Akilli Saat-4: 689 TL"); 	
	        }
	        else if(islem2==3)
        	{
       			printf("\n------Kablosuz Kulaklik------\n");
     			printf("\n Kablosuz Kulaklik-1: 149 TL");
     			printf("\n Kablosuz Kulaklik-2: 259 TL");
    			printf("\n Kablosuz Kulaklik-3: 459 TL");
    			printf("\n Kablosuz Kulaklik-4: 799 TL");
        	}
        	else if (islem2==4)
	        {
		      	printf("\n------Bilgisayar------\n");
		    	printf("\n Bilgisayar-1: 6999 TL");
		    	printf("\n Bilgisayar-2: 9799 TL");
		    	printf("\n Bilgisayar-3: 12599 TL");
			    printf("\n Bilgisayar-4: 16999 TL"); 
		 	}      
			for(;;){
	    	printf("\n\nBaska kategoriden urun sorgulamak icin 1'i, ana menuye donmek icin lutfen 2'yi tuslayin: ");
	    	scanf("%d",&islem3);
	            while(islem3<=0 || islem3>=3)
	            {
				printf("\nHatali secim yaptiniz.");
				break;
				}
				if(islem3==1)
	            {
	                islem=1;
					break;
			    }
			    else if(islem3==2)
                {
                	islem=0;
                	break;
				}
			}
	    }
    	
		while(islem==2)
		{
			islem1=0;
			printf("\n\n******************************************\n");
	    	printf("Sepete Urun Ekleme Ekrani\n\n");
	    	printf("Sepetinize Hangi Kategoriden Urun Eklemek Istiyorsunuz?\n");
	        printf("1-Akilli Telefon\n2-Akilli Saat\n3-Kablosuz Kulaklik\n4-Bilgisayar\n");
	     	printf("******************************************\n");	
	     	printf("Seciminiz: ");
	     	scanf("%d",&islem2);
     		while (0>=islem2 || islem2>4)
			{
				printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
				printf("\nSeciminiz: ");
				scanf("%d", &islem2);
			}
			if(islem2==1)
		    {
	            printf("Lutfen sepetinize Akilli Telefon kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Akilli Telefon-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*3099;				 	
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Akilli Telefon-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*2799;				 	
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Akilli Telefon-3 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*1899;				 	
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Akilli Telefon-4 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*2149;
				} 
				printf("\nIstediginiz urun sepetinize basariyla eklendi.");
				printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}	
			else if(islem2==2)
		    {
	            printf("Lutfen sepetinize Akilli Saat kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Akilli Saat-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*999;				 	
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Akilli Saat-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*899;				 	
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Akilli Saat-3 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*1489;
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Akilli Saat-4 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*689;				 	
		    	} 
		    	printf("\nIstediginiz urun sepetinize basariyla eklendi.");
		    	printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}		
			else if(islem2==3)
		    {
	            printf("Lutfen sepetinize Kablosuz Kulaklik kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*149;				 	
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*259;
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-3 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*459;
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Kablosuz Kulaklik-4 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*799;
		    	} 
		    	printf("\nIstediginiz urun sepetinize basariyla eklendi.");
		    	printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}
			else if(islem2==4)
		    {
	            printf("Lutfen sepetinize Bilgisayar kategorisinden hangi urunu eklemek istediginizi secin.");
	            printf("Seciminiz: ");
	            scanf("%d",&islem3);
	            while (0>=islem3 || islem3>4)
				{
					printf("\nHatali secim yaptiniz.Lutfen tekrar secim yapiniz: ");
					printf("\nSeciminiz: ");
					scanf("%d", &islem3);
				}	
                if(islem3==1)
				{
				 	printf("Lutfen sepetinize Bilgisayar-1 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*6999;
			    }
				else if(islem3==2)
				{
				 	printf("Lutfen sepetinize Bilgisayar-2 urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*9799;
				}
				else if (islem3==3)
				{
				 	printf("Lutfen sepetinize Bilgisayar urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*12599;
				}
			    else if (islem3==4)
		        {			
				 	printf("Lutfen sepetinize Bilgisayar urununden kac tane eklemek istediginizi secin.");
				 	printf("Seciminiz:");
				 	scanf("%d",&islem4);
				 	hesap+=islem3*16999;
		    	}
				printf("\nIstediginiz urun sepetinize basariyla eklendi."); 
				printf("\n\nBaska kategoriden urun eklemek icin 1'e, ana menuye donmek icin lutfen 2'yi tuslayin: ");
				scanf("%d",&islem4);
					while(islem4<=0 || islem4>=3)
					{
						printf("Hatali giris. Lutfen tekrar deneyin:");
						scanf("%d",&islem4);
					}
					if(islem4==1)
					{
						islem1=0;
					}
		    	    else if(islem4==2)
		    	    {
			            islem=0;
		    		}
			}				
		}	
		
		while(islem==3)
		{
		    printf("\n\n******************************************\n");
	     	printf("Siparisin Tamamlama Ekrani");
	     	indirimli=hesap-hesap%10;
	     	printf("\nHesabinizin tutari %d TL",hesap);
	     	printf("\nHesabinizin indirimli tutari %d",indirimli);
		    printf("\n******************************************\n");
		    printf("Alisverise devam etmek icin 1'i,siparisinizi sonlandirmak icin 2'yi tuslayin.\n");
		    printf("Seciminiz: ");
		    scanf("%d",&islem2);
		    while(0==islem2 || islem2>2)
			{
				printf("Hatali secim yaptiniz.Lutfen tekrar deneyiniz.");
				printf("Seciminiz: ");
				scanf("%d",&islem2);
			}
			if(islem2==1)
	    	{
	    		printf("\nAna ekrana yonlendiriliyorsunuz.\n");
	    		islem=0;
			}
			else if(islem2==2)
			{
				printf("\nSiparis sonlandirma ekranina yonlendiriliyorsunuz.\n");
				islem=4;
			}
		}
		while (islem==4)
		{
			printf("\n******************************************\n");	   
	        printf("Siparis Sonlandirma Ekrani\n");
	        printf("Siparisinizi sonlandirmak istediginize emin misiniz?\n");
	        printf("Evet ise 1'i, Hayir ise 2'yi tuslayin.\n");
	        printf("Seciminiz:");
	    	scanf("%d",&islem2);
	    	while(islem2<1 || islem2>2)
	    	{
	    		printf("Hatali secim yaptiniz.Lutfen tekrar deneyiniz.");
	    		printf("Seciminiz: ");
				scanf("%d",islem2);
			}
			if(islem2==1)
			{
				printf("Odeme yontemini seciniz.(1-Kredi Karti,2-Nakit): ");
				scanf("%d",&islem3);
			    while(0>=islem3 || islem3>2)
				{
					printf("Hatali giris yaptiniz.Lutfen tekrar deneyiniz.");
					printf("Seciminiz: ");
					scanf("%d",&islem3);
				}
			    if(islem3==1)
		        {
		         	printf("\nSuanda elimizde olmayan sebeplerden dolayi sadece nakit odeme alabiliyoruz.\nLutfen kasamiza basvurun.");
		         	printf("\nAnlayisiniz icin tesekkur eder, iyi gunler dileriz.\n          ***Alp Elektronik***");
				    break;
		        }
				else if(islem3==2)
				{
				 	printf("\nKasamizdaki arkadaslar size yardim icin hazir bekliyor.\n Bizi tercih ettiginiz icin tesekkur eder, iyi gunler dileriz.");
				 	printf("\n         ***Alp Elektronik***");
                    break;
				}
			}
			else if(islem2==2)
			{
				islem=0;
				printf("\nAna menuye yonlendiriliyorsunuz...\n");
				
			}
		
		}
	}	    
	return 0;
}
