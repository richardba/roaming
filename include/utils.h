/**
* @author Ricardo Barros Duarte d'Oliveira
* Arquivo contendo as váriaveis globais e métodos para não serem redefinidos
*/
#define WINDOW_HEIGHT (480)
#define WINDOW_WIDTH  (640)
// Variáveis do pipeline gráfico
extern GLuint glVertexArray;
extern GLuint glVertexBuffer;
extern GLuint colorBuffer;

// Varíaveis compartilhadas
extern GLint glAnimate;
extern GLint glFrames;
extern GLint glRotate;
extern GLint glStartX;
extern GLint glStartY;
extern long glStartTime, glEndTime;
extern unsigned char *glHeightMap;

// Métodos
extern GLint roamInit(unsigned char *map);
extern void animateToggle(void);
extern void calcNormal(float v[3][3], float out[3]);
extern void cameraMode(void);
extern void changeSize(GLsizei w, GLsizei h);
extern void drawFrustum();
extern void drawMode();
extern void freeTerrain();
extern void frustrumToggle(void);
extern void glPrint(int x, int y, char *text);
extern void idleFn(void);
extern void KeyBackward(void);
extern void KeyDown(void);
extern void KeyForward(void);
extern void KeyFOVDown(void);
extern void KeyFOVUp(void);
extern void KeyLeft(void);
extern void KeyRight(void);
extern void KeyUp(void);
extern void loadTerrain(GLint size, unsigned char **dest);
extern void mouseMove(GLint mouseX, GLint mouseY);
extern void mouseWheel(GLint, GLint, GLint, GLint);
extern void reduceToUnit(float vector[3]);
extern void renderMode(void);
extern void renderScene(void);
extern void roamDrawFrame();
extern void SetupRC();
extern GLvoid shaderPlumbing();
extern void toggleLessDetail(void);
extern void toggleMoreDetail(void);
