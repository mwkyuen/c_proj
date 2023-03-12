enum Direction {
  na = 0,
  right = 1,
  left = 2,
  up = 3,
  down = 4,
};


typedef struct Coords {
  int x;
  int y;
} Coords_t;


typedef struct Segment {
  Coords_t coordinates;
  Direction dir;
  struct Segment *next;
} Segment_t;


// refactor to use Coords_t only?
typedef struct Food {
  Coords_t food;
} Food_t;


typedef struct Board {
  Segment_t *snake;
  Food_t *food;
  int max_height;
  int max_width;
} Board_t;


bool food_exist(Board_t *board);
Board_t make_food(Board_t *board);
Board_t consume_food(Board_t *board, Segment_t *snake);
bool collision(Segment_t *snake);
Segment_t move(Segment_t *snake);
bool no_step_on_snek(Segment_t *snake, int x, int y);


#define INIT_SNAKE ();