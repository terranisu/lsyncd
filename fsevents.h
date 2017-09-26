#include <CoreFoundation/CoreFoundation.h>
#include <CoreServices/CoreServices.h>

typedef struct {
	size_t len;
	size_t size;
	char **paths;
	lua_State *L;
} file_paths_t;


static void handle_event(
	file_paths_t *file_paths,
	char *path
);

void event_callback(
	ConstFSEventStreamRef streamRef,
	void *ctx,
	size_t count,
	void *paths,
	const FSEventStreamEventFlags flags[],
	const FSEventStreamEventId ids[]
);
