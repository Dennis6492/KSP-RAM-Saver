#include <stdlib.h>

main()
{
    int n,card,API,format;

    printf("Hello! thanks for downloading this little utility! Hope you find it useful!\n\n");
    printf("How do you want to open KSP? \n(1) Choose for me (Default) \n(2) I want to choose \n\nChoose your option (type 1 or 2 and then press enter) >>");
    scanf("%i",&n);
    printf("\n");    

    if (n==2)
    {
        system("cls");
        printf("Ok, you choose\n");
        printf("Which Graphics card do you have? \n(1) AMD/ATI \n(2) Nvidia \n(3) I want more (advanced) options \n>>");
        scanf("%i",&card);
        switch(card)
        {
            case 1 :
                system("KSP.exe -force-opengl");
                return;
            case 2 :
                system("KSP.exe -force-opengl");
                return;
            case 3 :
                system("cls");
                printf("Advanced\n");
                printf("Choose API \n(1) OpenGL (2) DirectX 11 (3) DirectX 9 \n>>");
                scanf("%i",&API);
                system("cls");
                switch(API)
                {
                    case 1 :
                        printf("You selected OpenGL");
                        break;
                    case 2 :
                        printf("You selected DirectX 11");
                        break;
                    case 3 :
                        printf("You selected DirectX 9");
                        break;
                    default :
                        printf("You selected no API, OpenGL will be used");                       
                }
                printf("\nNow, the last parameter \n(1) Frameless window (may help solve some problems) \n(2) User's Screen settings\n>>");
                scanf("%i",&format);
                switch(format)
                {
                    case 1 :
                        switch(API)
                        {
                            case 1 :
                                system("KSP.exe -force-opengl -popupwindow");
                                break;
                            case 2 :
                                system("KSP.exe -force-d3d11 -popupwindow");
                                break;
                            case 3 :
                                system("KSP.exe -force-d3d9 -popupwindow");
                                break;
                            default :
                                system("KSP.exe -force-opengl -popupwindow");                        
                        }
                        break;
                    case 2 :
                        switch(API)
                        {
                            case 1 :
                                system("KSP.exe -force-opengl");
                                break;
                            case 2 :
                                system("KSP.exe -force-d3d11");
                                break;
                            case 3 :
                                system("KSP.exe -force-d3d9");
                                break;
                            default :
                                system("KSP.exe -force-opengl");                        
                        }
                        break;
                    default :
                        system("KSP.exe -force-opengl");                        
                }
            default :
                system("KSP.exe -force-opengl");
        }
    }
    else
    {
        system("KSP.exe -force-opengl");
    }
    
    return;
}
