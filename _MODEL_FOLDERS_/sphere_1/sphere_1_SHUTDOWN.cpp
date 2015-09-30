    if(sphere_1_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &sphere_1_NORMALMAP);    
        sphere_1_NORMALMAP = 0;                      
    }                                                              
    if(sphere_1_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &sphere_1_TEXTUREMAP);   
        sphere_1_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(sphere_1_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &sphere_1_VBO);           
        sphere_1_VBO  = 0;                           
    }                                                              
    if(sphere_1_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &sphere_1_INDICES_VBO);   
        sphere_1_INDICES_VBO  = 0;                   
    }                                                              
