
#include "clovis.h"
#include "s3_common.h"

EXTERN_C_BLOCK_BEGIN
// To create a basic clovis operation
struct s3_clovis_op_context {
  struct m0_clovis_obj *obj;
  struct m0_clovis_op **ops;
  struct m0_clovis_op_cbs  *cbs;
  size_t op_count;
};

struct s3_clovis_rw_op_context {
  struct m0_indexvec      *ext;
  struct m0_bufvec        *data;
  struct m0_bufvec        *attr;
};

void create_basic_op_ctx(struct s3_clovis_op_context *ctx, size_t op_count);
int free_basic_op_ctx(struct s3_clovis_op_context *ctx);

int create_basic_rw_op_ctx(struct s3_clovis_rw_op_context *ctx, size_t clovis_block_count, size_t clovis_block_size);
void free_basic_rw_op_ctx(struct s3_clovis_rw_op_context *ctx);

EXTERN_C_BLOCK_END
